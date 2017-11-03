class linear_search{
	public static void main(String []args){
		int arr[]={1,2,7,4,8,5,8};
		int find =5;
		boolean b = false;
		for(int i=0;i<arr.length;i++){
			if(find == arr[i])
			{
				b = true;
				break;
			}
		}
		if (b)
			System.out.println("Yes");
		else
			System.out.println("No");

		
	}
}
