int rand_num(int num1,int num2)
{
	int rand_num,num_min;

	num_min = num1;

	if(num1 > num2)
		num_min = num2;

	rand_num = rand()%(abs(num2-num1)+1)+num_min;

	return rand_num;
}