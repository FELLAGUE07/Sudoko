#include<iostream>
using namespace std;
//test1
struct products{
		int code;
		string des;
		int stock;
		int price;
	};
void add(products t1[],int nbr){
	if(nbr<=100){
	t1[nbr].code=nbr+1;
	cout<<"Enter the name: ";
	cin>>t1[nbr].des;
	cout<<"Enter the stock: ";
	cin>>t1[nbr].stock;
	cout<<"Enter the price: ";
	cin>>t1[nbr].price;
}else {
	cout<<"sorry, no place for that, you just pass over 100 products.";
}
//test2
}
void post(products t2[],int nbr){
	int i;
	cout<<"Code\tname\tstock\tprice"<<endl;
	for(i=0;i<nbr;i++){
		cout<<t2[i].code<<"\t"<<t2[i].des<<"\t"<<t2[i].stock<<"\t"<<t2[i].price<<endl;
	}
}
void del(products t3[],int nbr,int d){
	int i;
	for(i=d-1;i<nbr;i++){
		t3[i].code=t3[i+1].code-1;
		t3[i].des=t3[i+1].des;
		t3[i].stock=t3[i+1].stock;
		t3[i].price=t3[i+1].price;
	}
}
void sell(products t4[],int nbr,int c,int qt){
	int i;
	for(i=0;i<nbr;i++){
		if(t4[i].code==c){
			c=c-1;
			if(qt>t4[c].stock){
				cout<<"The quantity you want to sell is higher than the one which exist,it's not possible'";
			}else{
			t4[c].stock=t4[c].stock-qt;
				}
		}
	}
}
main()
{
	products tab[100];
	int j,x,i,n,q,code,c,nb;
	cout<<"this program manages a table of products defined by the name, the stock and the price "<<endl;
	n=0;
	j=0;
	while((j<=100)&&(x!=5)){
		cout<<"'1'for adding,'2'for deleting,'3'for posting,'4'for selling and'5'for quitting"<<endl;
		cout<<"choose one of the number mentionned: ";
		cin>>x;
		switch(x){
			case 1:
					cout<<"enter the new products:"<<endl;
					add(tab,n);
					n++;
					break;
			case 2:
				if(n==0){
					cout<<"Sorry, there is no products to delete.";
				}else{
					cout<<"enter the product's code that you want to delete: ";
					cin>>c;
					del(tab,n,c);
					n=n-1;
				}
					break;
			case 3:
					if(n==0){
						cout<<"Sorry, there is no product to post.";
					}else{
							post(tab,n);
							}
					break;
			case 4:
					cout<<"enter the product's code and the quantity you want to sell: "<<endl;
					cout<<"Code: ";
					cin>>code;
					cout<<"Quantity: ";
					cin>>q;
					sell(tab,n,code,q);
					break;
			case 5:
					cout<<"the program is quit."<<endl;
					break;
			default:
					cout<<"incorrect choice";
		}
		cout<<endl<<endl;
		j=j+1;
}
cout<<"the program is finish";
}
