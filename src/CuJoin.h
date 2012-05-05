#include <stdio.h>
#include "CuTest.h"

void testHooker(CuSuite* intoSuite);

int main(int argc, const char* argv[]) {
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

	testHooker(suite);

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
}
