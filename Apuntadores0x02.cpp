#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void Ordenar(char *frase);

int main(){
	
	char frase[30];
	char *p;
	p=&frase[0];
	cout<<"Ingresa Una Frase"<<endl;
	cin.getline(frase, 30);
	
	Ordenar(p);
	
	
	return 0;
}

void Ordenar(char *frase){
	 char *temp;
     char *arre[20];
	 char *p;
	 p=frase;
	 arre[0]=p;
	 int i=1;
	 int x;
     int j;
	
     while(*p!='\0'){
		 if(*p==' '){
			 arre[i]=p+1;
			 *p='\0';		 	
			 i++;
		 }
         p++;
	 }
	  for(x=0; x<i-1; x++){
            for(j=0; j<i-1; j++){
                if(strcmp(arre[j], arre[j+1]) > 0){
                    temp = arre[j];
                    arre[j] = arre[j+1];
                    arre[j+1] = temp;
                }
            }
        }
		for (int x=0;x<i;x++){
			cout<<arre[x]<<" ";
			}
    }
	 

	 
	 
	 
	 


