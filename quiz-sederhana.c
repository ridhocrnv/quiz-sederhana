#include <stdio.h>

int main(){
  int skor = 0; //variabel untuk menyimpan skor
  int jawaban; //variabel untuk menyimpan jawaban pemain

  printf("Selamat datang di Game Kuis Sederhana\n\n");

  //Pertanyaan 1
  printf("1. Apa Ibukota dari provinsi Sulawesi Tenggara?\n\n");
  printf("1. A. Bau-bau\n");
  printf("2. B. Kendari\n");
  printf("3. C. Kolaka\n");
  printf("4. D. Bombana\n\n");
  printf("Jawaban Anda (Masukkan nomor pilihan 1-4): \n");
  scanf("%d", &jawaban);

  if (jawaban == 2 ) {
    //Jawaban benar adalah 'B. Kendari' (nomor 2)
    printf("Jawaban Anda Benar\n");
    skor++;
  }else {
    printf("Jawaban Salah! Jawaban Yang Benar Adalah B. Kendari");
  }
  
  printf("\n");

  //pertanyaan 2
  printf("2. Makanan khas Sulawesi Tenggara yang terbuat dari sagu adalah?\n\n");
  printf("1. A. Konro\n");
  printf("2. B. Buras\n");
  printf("3. C. Sinonggi\n");
  printf("4. D. Pallu Basa\n\n");
  printf("Jawaban Anda (Masukkan nomor pilihan 1-4): \n");
  scanf("%d", &jawaban);

  if (jawaban == 3 ) {
    //Jawaban benar adalah 'C. Sinonggi' (nomor 3)
    printf("Jawaban Anda Benar\n");
    skor++;
  }else {
    printf("Jawaban Salah! Jawaban Yang Benar Adalah C. Sinonggi");
  }
  
  printf("\n");

  //Pertanyaan 3
  printf("3. Pantai terkenal yang ada di Kendari adalah?\n\n");
  printf("1. A. Pantai Nambo\n");
  printf("2. B. Pantai Pasir Putih\n");
  printf("3. C. Pantai Losari\n");
  printf("4. D. Pantai Napabale\n\n");
  printf("Jawaban Anda (Masukkan nomor pilihan 1-4): \n");
  scanf("%d", &jawaban);

  if (jawaban == 1 ) {
    //Jawaban benar adalah 'A. Pantai Nambo' (nomor 1)
    printf("Jawaban Anda Benar\n");
    skor++;
  }else {
    printf("Jawaban Salah! Jawaban Yang Benar Adalah A. Pantai Nambo");
  }
  
  printf("\n");

  //Tampilkan skor akhir
  printf("Kuis Selesai! Skor Anda: %d/3\n", skor);

  return 0;
}