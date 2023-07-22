#include <iostream>

int main() {
	int nilaiRaport[4] = {70, 60, 50, 80};
	int cari;
	int result;
	int index;

	std::cout << "Search Data : "; std::cin >> cari;

	for(int i = 0; i < 4; i++) {
		if (cari == nilaiRaport[i]) {
			result = cari;
			index = i;
			break;
		} else {
			result = 0;
		}
	}
	
	if (result > 0) {
		std::cout << "Yeay! Data ditemukan" << "\n";
		std::cout << "Data : " << result << "\n";
		std::cout << "Index : " << index << "\n";
	} else {
		std::cout << "Oops! Data tidak ditemukan!" << "\n";
	}


	return 0;
}
