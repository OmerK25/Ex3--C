void shift_elements(int* arr, int i){

for (int j = i; j >0; j--){
*(arr+j) = *(arr+j-1);
  
}
}

void insertion_sort(int* arr, int len){

int i,j,key;
for(i=1;i<len;i++){
key = *(arr+i);
j = i-1;

while (j>=0 && *(arr+j)>key){
*(arr+j+1)=*(arr+j);
j = j-1;  
}
*(arr+j+1) = key;

    


}

}