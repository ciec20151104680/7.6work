// readfile.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *fp;
	int flen;
	char *str;
	if((fp=fopen("d:\\test\\abc.txt","r"))==0)
	{
		printf("Can not open file!\n");
		return=-1;
	}
	fseek(fp,0,SEEK_END);
	flen=ftell(fp);
	fseek(fp,0,SEEK_SET);
	str=(char *)malloc(1*flen);
	fread(str,1,flen,fp);
	printf("len=%d    %c\n",flen,str[0]);
	
	fclose(fp);
}
	return 0;
}

