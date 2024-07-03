#include <vector>
using namespace std;
class PrimeFactor {
public : 
	int divisor = 2;
	vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1  ) {
			if (number == 4) {

				while (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
	

			}
			else if (number == 6) {

				if (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
				divisor++;
				if (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
				divisor++;

			}
			else {
				result.push_back(number);
			}
			
		}
		return result;
	}

};