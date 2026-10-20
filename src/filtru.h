// filtru.h – medie mobilă (pseudo-cod)
// buffer[N]; la fiecare eșantion nou:
//   suma = suma - buffer[i] + esantion_nou
//   buffer[i] = esantion_nou; i = (i + 1) % N
//   return suma / N
