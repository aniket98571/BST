void insert(){
do{

		BST *new1=new BST;
		cout<<"\nenter the data:";
		cin>>new1->data;
if(root==NULL){
	root=new1;

}
else
	add( root, new1);
		cout<<"\ndo you want to enter more nodes Y for yes:";
		cin>>ans;
}while(ans=='Y'||ans=='y');
}
void add(BST *temp,BST *new1){
	if(new1->data<temp->data){
		if(temp->left==NULL){
			temp->left=new1;
				    }	
		else{
		 add(temp->left,new1);

