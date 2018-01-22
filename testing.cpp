// input - given string
// Update in the given input itself. No need to return or print anything

void reverseEachWord(char input[]) {
    // Write your code here
int i=0;
while(input[i]!='\0')
{
	i++;
}
int j=0,k=0,l=0,temp=0;
while(j<i-1)
{

while(input[k]!=' ')
{
	k++;
}
k=k-1;
l=k;
while(j<k)
{
	temp=input[j];
	input[j]=input[k];
	input[k]=temp;
	j++;
	k--;
}
j=k+2;
k=k+2;
}

}
