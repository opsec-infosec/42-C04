#include <stdio.h>
#include "../ex03/ft_atoi.c"

int ft_atoi(char *);

int main() {

	printf("Calling atoi(\"0\");                     | Expected = 0          | Result = %d\n",ft_atoi("0"));
	printf("Calling atoi(\"-0\");                    | Expected = 0          | Result = %d\n",ft_atoi("-0"));
	printf("Calling atoi(\"42\");                    | Expected = 42         | Result = %d\n",ft_atoi("42"));
	printf("Calling atoi(\"-42\");                   | Expected = -42        | Result = %d\n",ft_atoi("-42"));
	printf("Calling atoi(\"       ++42\");           | Expected = 42         | Result = %d\n",ft_atoi("       +42"));
	printf("Calling atoi(\"       -+--42\");         | Expected = -42        | Result = %d\n",ft_atoi("       -+--42"));
	printf("Calling atoi(\"       ---42AbuDhabi\");  | Expected = -42        | Result = %d\n",ft_atoi("       ---42AbuDhabi"));
	printf("Calling atoi(\"       ---42Abu-Dhabi\"); | Expected = -42        | Result = %d\n",ft_atoi("       ---42Abu-Dhabi"));
	printf("Calling atoi(\"2147483647\");            | Expected = 2147483647 | Result = %d\n",ft_atoi("2147483647"));
	printf("Calling atoi(\"---2147483647\");         | Expected = -2147483647| Result = %d\n",ft_atoi("---2147483647"));
	printf("Calling atoi(\"2147483648\");            | Expected = -2147483648| Result = %d\n",ft_atoi("2147483648"));
	printf("Calling atoi(\"Abu-Dhabi 42\");          | Expected = 0          | Result = %d\n",ft_atoi("Abu_Dhabi 42"));
	printf("Calling atoi(\"\");                      | Expected = 0          | Result = %d\n",ft_atoi(""));

	return 0;
}