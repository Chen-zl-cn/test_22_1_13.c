#include <stdio.h>
#include <assert.h>

//���ʵ���Լ���strcpy()
//�汾һ��

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//}
//
//int main()
//{
//	char arr_1[] = "#################";
//	char arr_2[] = "hello";
//	my_strcpy(arr_1, arr_2);
//	printf("%s", arr_1);
//	return 0;
//}

//�Ż�-�汾��
//void my_strcpy(char* dest, char* src)
//{
//	if (*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//
//int main()
//{
//	char arr_1[] = "#################";
//	char arr_2[] = "hello";
//	my_strcpy(arr_1, arr_2);
//	printf("%s", arr_1);
//	return 0;
//}

//�Ż�-�汾��
//void my_strcpy(char* dest, char* src)
//{
//	assert(*dest != NULL);//���ԣ�����������ᱨ��
//	assert(*src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr_1[] = "#################";
//	char arr_2[] = "hello";
//	my_strcpy(arr_1, arr_2);
//	printf("%s", arr_1);
//	return 0;
//}

//�Ż�-�汾��
//void my_strcpy(char* dest, const char* src)//��֤Դ�����޸�
//{
//	assert(*dest != NULL);//���ԣ�����������ᱨ��
//	assert(*src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr_1[] = "#################";
//	char arr_2[] = "hello";
//	my_strcpy(arr_1, arr_2);
//	printf("%s", arr_1);
//	return 0;
//}


//�Ż�-�汾��
//char* my_strcpy(char* dest, const char* src)//��֤Դ�����޸�
//{
//	char* ret = dest;
//	assert(*dest != NULL);//���ԣ�����������ᱨ��
//	assert(*src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr_1[] = "#################";
//	char arr_2[] = "hello";
//	printf("%s", my_strcpy(arr_1, arr_2));
//	return 0;
//}


//�Ż���strlen()
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "######";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}