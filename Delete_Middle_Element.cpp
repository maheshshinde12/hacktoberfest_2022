void solve(stack<int>&inputStack, int count, int size) {
    //base case
    if(count == size/2) {//if(0==4/2)
        inputStack.pop();//continuasely looping upto condition is the same
        return ;
    }
    
    int num = inputStack.top();//For those condition if there is available of only 4 elements 
    inputStack.pop();// Remove one element form those 4 elements becuse the middle finding is possible
    
	//RECURSIVE CALL
    solve(inputStack, count+1, size);//solve((134),1,4)
    
    inputStack.push(num);//At last re add the element 

}
void deleteMiddle(stack<int>&inputStack, int N)
{
  	int count = 0;
    solve(inputStack, count, N);
   
}
