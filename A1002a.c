#include <stdio.h>

int main(){
int K,L;
int NK[20],NL[20],T[20];
float ak[20],al[20],t[20],result;
int i,j,r;
scanf("%d",&K);
for(i=0; i<K;i++){
scanf("%d",&NK[i]);
scanf("%f",&ak[i]);
}
scanf("%d",&L);
for(i=0; i<L; i++){
scanf("%d",&NL[i]);
scanf("%f",&al[i]);
}
i=j=r=0;
while(i<K&&j<L){
if(NK[i]<NL[j]){
T[r]=NL[j];
t[r]=al[j];
r++;
j++;
}
else if(NK[i]>NL[j]){
T[r]=NK[i];
t[r]=ak[i];
r++;
i++;
}else{
result=ak[i]+al[j];
if(result!=0.0){
T[r]=NK[i];
t[r]=result;
i++;
j++;
r++;
}else{
i++;
j++;
}
}
}
if(i==K){
while(j<L){
T[r]=NL[j];
t[r]=al[j];
r++;
j++;
}
}
if(j==L){
while(i<K){
T[r]=NK[i];
t[r]=ak[i];
r++;
i++;
}
}
printf("%d",r);
for(i=0;i<r;i++){
printf(" %d %.1f",T[i],t[i]);
}
return 0;
}
