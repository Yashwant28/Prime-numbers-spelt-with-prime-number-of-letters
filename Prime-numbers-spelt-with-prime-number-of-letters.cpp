#include <iostream>
#include <string>
#include <cstring>
 
int checkPrimeNumber(int);
int expand(int);
static int count=0;
static int count1=0;

int main()
{
    int n1, n2;
    int y,x,i,r;
    int comp[10000];
    bool flag;
    int arr[10000];
    std::cin>>n1;
    std::cin>>n2;
 
    for(i = n1+1; i < n2; ++i)
    {
        flag = checkPrimeNumber(i);
 
        if(flag == true)
        {
            arr[i]=i;
            r=expand(i);
            comp[i]=r;
        }    
        count=0;
    }
    
  
    for(int i = 0; i< n2; i++)
    {
        if (comp[i]==2||comp[i]==3||comp[i]==5||comp[i]==7||comp[i]==11||comp[i]==13||comp[i]==17||comp[i]==19||comp[i]==23||comp[i]==29||comp[i]==31||comp[i]==37||comp[i]==41||comp[i]==43||comp[i]==47||comp[i]==53||comp[i]==59||comp[i]==61||comp[i]==67||comp[i]==71||comp[i]==73||comp[i]==79||comp[i]==83||comp[i]==89||comp[i]==97)
        {
            count1++;
        }
    }
    std::cout<<count1<<std::endl;
    
    return 0;
}


int checkPrimeNumber(int n)
{
    bool flag = true;
    for(int j = 2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}


int expand(int value)
{
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    const char * const tens[10] = {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};
    
    if(value<0)
    {
        //std::cout<<"minus ";
        count=count+5;
        expand(-value);
    }
    else if(value>=1000)
    {
        expand(value/1000);
        //std::cout<<" thousand";
        count=count+8;
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                //std::cout << " and";
                count=count+3;
            }
            //std::cout << " " ;
           
            expand(value % 1000);
        }
    }
    else if(value >= 100)
    {
        expand(value / 100);
        //std::cout<<" hundred";
        count=count+7;
        
        if(value % 100)
        {
            //std::cout << " and ";
            count=count+3;
            expand (value % 100);
        }
    }
    else if(value >= 20)
    {
        int len;
        //std::cout << tens[value / 10];
        len=strlen(tens[value / 10]);
        count=count+len;
        if(value % 10)
        {
            //std::cout << " ";
            
            expand(value % 10);
        }
    }
    else
    {
        int len1;
        //std::cout<<ones[value];
        len1=strlen(ones[value]);
        count=count+len1;
    }
    
    return count;
}
