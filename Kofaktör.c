//KOFAKTÖR YÖNTEMÝ ÝLE DETERMÝNANT BULMA
#include <stdio.h>

void main()
   {
  int arr1[10][10],i,j,n;
  int det=0;
  
    printf("Matris boyutunu girin: ");
	scanf("%d", &n);
	 
	 printf("Matrisin elemanlarýný girin :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }  
	 printf("Matris :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

  for(i=0;i<n;i++)
      det = det + (arr1[0][i]*(arr1[1][(i+1)%3]*arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));

  printf("\nMatrisin determinantý -->: %d\n\n",det);
}

