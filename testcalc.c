#include <stdio.h>
#include "minunit.h"


int soma( int v1, int v2 );
int subtracap( int v1, int v2 );


MU_TEST(teste_subtracao) {
	mu_assert(
	subtracao(7,2)==5,
	
	"Erro na subtracao 7 - 2"
	);
}


MU_TEST(teste_soma){
	mu_assert(
	soma(5,5)==10,
	"Erro na soma 5 + 5"
	);
}


MU_TEST_SUITE(teste_suite){
	MU_RUN_TEST(teste_soma);
	MU_RUN_TEST(teste_subtracao);
}


int main(){
	MU_RUN_SUITE(teste_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}









