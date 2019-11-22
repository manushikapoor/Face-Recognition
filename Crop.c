#include<stdio.h>
int main()
{
int temp, y1, y2, x1, x2, wide, high;

 printf("Please Enter x1 y1 x2 y2");


scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
if(y1> y2)
{
    temp = y1;
    y1 = y2;
    y2 = temp;
}
if(x1> x2)
{
    temp = x1;
    x1 = x2;
    x2 = temp;
} 
wide = x2-x1+1;
high = y2-y1+1;

printf(outstream, "%2s\n%i %i\n%i\n", header->filetype, wide, high,header->maxgray);

pixel image[header->height][header->width];
pixel *pix = malloc((wide*high) *sizeof(char));

int a = 0;

    for(int b= 0; b<header->height; ++b)
    {
        for(int c=0; c<header->width; ++c)
        {

           image[b][c] = header->p[a];
            ++a;
        }
    }

int k = 0;
for(int i = 0; i< high; ++i)
{
    for(int j = 0; j<wide; ++j)
    {
        pix[k]=image[i][j];

    }
}
fwrite(pix, 1, (wide*high) * sizeof(pixel), outstream);
}
