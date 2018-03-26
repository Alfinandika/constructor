#include <iostream>
using namespace std;

class Student {				// deklarasi class Student
	private:				//enkapsulasi private hanya bisa diakses di class itu sendiri dan turunannya     
		int absence;		//deklarasi property dengan nama absence
	public : 				//enkapsulasi public bisa di akses di luar class 
		Student() {			//deklarasi default constructor (Tidak mempunyai argumen)

		}

		Student(int cAbsence): absence{cAbsence} {

		}

		//Konstruktor yang diatas dibuat bertujuan untuk memberikan nilai awal terhadap data member secara langsung ketika kelas dibangkitkan (called). Pada saat konstruktor dibangkitkan maka nilai yang ada pada parameter-parameter akan langsung diisikan kedalam masing-masing data member.

		Student(const Student &obj) {
			absence = obj.absence;
		}

		//Copy Constructor di atas Argumen pertama menjadi konstruktor yang mereferensikan kepada objek lainnya dari jenis yang sama yang sudah dibangun, dimana memungkinkan diikuti oleh parameter dari jenis apapun.
		//Salinan konstruktor dipanggil ketika objek melewati nilai, dikembalikan oleh nilai, atau disalin secara eksplisit.
		
		void printOutput() {  
			cout << "The absence is " << absence << endl;
		}

		//methpd printOutput untuk memanggil property absence yang sudah di ini nilainya lewat constructpr
		~Student() {}

		//method di atas menggunakan tanda tilde (~) adalah sebuah Destruktor yang memiliki fungsi yang berlawanan dari konstruktor. Destruktor bertanggung jawab untuk melakukam pembersihan yang diperlukan ketika daur hidup dari kelas berakhir. setiap kelas yang didefinisikan dan dan telah digunakan maka harus dilakukan pembersihan terhadap memori dinamis yang telah digunakan.
};

int main() {
	Student student1(1123);
	//memanggi sebuah class dengan memasukkan parameter 1123 yang akan melewati sebuah constructor

	Student student2 = student1; 
	//deklarasi object yang mereferensikan pada object serupa yaitu student1

	student2.printOutput();
	//memanggil method printOutput lewat object student2

	return 0;
}
