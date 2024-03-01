#include <stdio.h> 
#include <string.h> 
int main (){ 
    char s[100]; 
	gets (s); 
	int demngoac1=0, demngoac2=0, demngoac3=0, demngoac4=0, demngoac5=0, demngoac6=0,demngoac7=0,demngoac8=0; 
	for (int i=0;i<strlen(s); i++){ 
	    if (s[i]=='('){ 
		    demngoac1++;
		} else if (s[i]==')'){ 
		    demngoac2++;
		} else if (s[i]=='['){
		    demngoac3++; 
		} else if (s[i]==']'){
		    demngoac4++;
		} else if (s[i]=='{'){ 
		    demngoac5++; 
		} else if (s[i]=='}'){
		    demngoac6++; 
		} else if (s[i]=='"'){
		    demngoac7++; 
		} else if (s[i]==39){
		    demngoac8++; 
		} //ngoac 8 la ngoac '
	}
	if (demngoac1==demngoac2&&demngoac3==demngoac4&&demngoac5==demngoac6&&demngoac7%2==0&&demngoac8%2==0){ 
	    printf ("1"); 
	} else {
	    printf ("0");  
	}
}
	
