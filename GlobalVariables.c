int A;
int B;

int fun() {
	static int count = 0; //Static Variable
	count++;
	return count;
}

int Add()
{
	return A + B;
}

int main() {
	int answer;
	A = 5;
	B = 7;
	answer = Add();
	printf("%d\n", answer);
	printf("%d ", fun());
	printf("%d ", fun());
	return 0;
}
