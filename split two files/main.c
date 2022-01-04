/* filecopy.c */
#include <stdio.h>
#include <stdlib.h>
int c;
int i = 0;

void main() {
char in_file[50], out_file1[50], out_file2[50];
FILE *outfile1, *outfile2, *infile, *fopen();
printf("Enter input file:\n");
scanf("%24s", in_file);
printf("Enter output file1:\n");
scanf("%24s", out_file1);
printf("Enter output file2:\n");
scanf("%24s", out_file2);
infile = fopen(in_file,"r");
if(infile == NULL)
printf("Cannot open %s for reading.\n", in_file);
else {
        while(!feof(infile))
        {
            if(getc(infile)=='\n')
            {
             i++;
            }
        }
     }
int j = i;
outfile1 = fopen (out_file1, "w");
if( outfile1 == NULL )
    printf("Can't open %s for writing.\n",out_file1);
else {
   rewind(infile);
    while(j > i/2) {
        c = getc(infile);
        putc(c, outfile1);
        if(c == 10)
        j--;
    }
    printf("File has been copied.\n");
    fclose (outfile1);
}

outfile2 = fopen(out_file2, "w");
if( outfile2 == NULL )
    printf("Can't open %s for writing.\n",out_file2);
else {
    while(j > 0) {
        c = getc(infile);
        putc(c, outfile2);
        if(c == 10)
        j--;
        }
    printf("File has been copied.\n");
    fclose (outfile2);
}
fclose(infile);
}
