import java.io.*;
import java.util.Scanner;
public class Kruskal
{
	public static void main(String args[])
	{
		int cost[][]=new int[10][10];
		int i,j,mincost=0;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the number of nodes: ");
		int n = in.nextInt();
		System.out.println("Enter the cost matrix");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cost[i][j] = in.nextInt();
			}
		}
		mincost=kruskals(n,mincost,cost);
		System.out.println("The minimum spanning tree cost is: "+mincost);
	}
	static int kruskals(int n,int mincost,int cost[][])
	{
		int ne = 1, a=0, u=0, b=0, v=0, min;
		int parent[]=new int[10];
		while(ne < n)
		{
			min=999;
			for(int i=1; i<=n; i++)
			{
				for(int j=1; j<=n; j++)
				{
					if(cost[i][j] < min)
					{
						min = cost[i][j];
						a=u=i;
						b=v=j;
					}
				}
			}
			while(parent[u]>0)
			u = parent[u];
			while(parent[v]>0)
			v = parent[v];

			if(u != v)
			{
				System.out.print((ne++)+") Minimum edge is: ");
				System.out.println("("+a+"-->"+b+") and its cost is: "+min);
				mincost += min;
				parent[v] = u;
			}
			cost[a][b] = cost[b][a] = 999;
		}
		return mincost;
	}
}