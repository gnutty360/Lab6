 
#include<stdio.h>
#include<string.h>
void main()
{
	    int i=0;
	        char arr1[ 15 ] = "Trumantiger";
		    char arr2[ 15 ];
		        while(i<15){
				        arr2[ i ] = 'A';
					++i;
					    }
			    strcpy( arr2 , arr1 );
			        printf("%s",arr1);
}
