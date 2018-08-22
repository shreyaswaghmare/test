#include <stdio.h>

void convert(int n, int base)
{
    int i, m, digits[1000], flag = 0; 
    i=0; 
    //printf("\nflag is : %d\n",flag);
    printf("\n\n[%d] converted to base [%d] : ", n, base); 
    while(n) { 
        m=n%base; 
        digits[i]="0123456789abcdefghijklmnopqrstuvwxyz"[m];
        n=n/base; 
        i++; 
        
    } 
    //Eliminate any leading zeroes 
    
    for(i--;i>=0;i--) { 
        if(!flag && digits[i]!='0')flag=1; 
        if(flag)printf("%c",digits[i]); 
        
    }
}

int main()
{
    int num = 10;
    
    convert(num,16);
    convert(num,8);
    convert(num,2);
    return 0;
}

