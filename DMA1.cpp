#include<iostream> 
using namespace std; 
int main(){ 
	int size,sum; 
	int* a=new int; 
	int* b=new int; 
	int* arr; 
	cout<<"Enter a & b "; 
	cin>>*a>>*b; 
	cout<<"Enter size of array: "; 
	cin>>size; 
	arr=new int[size]; 
	cout<<"Enter elements of array!\n"; 
	for(int i=0;i<size;i++){ 
		cin>>arr[i]; 
		//cin>>*(arr+i); 
	} 
	for(int i=0;i<size;i++){ 
		sum+=arr[i]; 
	} 
	cout<<"Sum of a & b: "<<*a+*b<<endl; 
	cout<<" - of a & b: "<<*a-*b<<endl; 
	cout<<" * of a & b: "<<*a*(*b)<<endl; 
	cout<<" / of a & b: "<<*a/(*b)<<endl; 
	cout<<"Sum of array elements: "<<sum<<endl; 
	delete a; 
	delete b; 
	delete []arr; 
	return 0; 
}
