#include <stdio.h>

int main()
{
    long long int n, k, kucing, totalTinggi = 0, max = 0, sekat = 0, index = 0;
    scanf("%lld %lld", &n, &k);
    for (int i = 0; i < n; i++)
    {
        // alas dan atap
        if (i == 0)
        {
            totalTinggi += 2;
        }
        scanf("%lld", &kucing);
        // cari tinggi max yang diinginkan kucing
        if (kucing > max)
        {
            max = kucing;
        }
        index++;
        if (index == k || i == n - 1)
        {
            totalTinggi += max;
            max = 0;
            index = 0;
            if (i != n - 1)
            {
                sekat++;
            }
        }
    }
    printf("%lld\n", totalTinggi + sekat);
    return 0;
}

/*
penelusuran
input
5 3
30
20
15
19
29
------------
data 1
i 		        = 0
total tinggi 	= 2
kucing 	        = 30 
max		        = 30

data 2
i 		        = 1
total tinggi 	= 2
kucing 	        = 20 
max		        = 30

data 3
i 		        = 2
total tinggi 	= 2
kucing 	        = 15 
max		        = 30

data 4
i 	        	= 3
total tinggi 	= 2
kucing      	= 19 
max		        = 30
total tinggi	= 2 + 30 = 32
max 	    	= 0

data 5
i 		        = 4
total tinggi 	= 2
kucing         	= 29 
max		        = 29
total tinggi	= 32 + 29 = 61
sekat		    = 1

cetak
total tinggi + sekat = 62
*/