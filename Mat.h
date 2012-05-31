
#ifndef __MAT__H_
#define __MAT__H_

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

double** CreateMat();
void DestroyMat(double** mat);
void PrintMat(double** mat);
bool SaveMatToFile(double** mat, char* fileName);
bool SaveMatToFile(double** mat, char* fileName, char* folder);
bool SaveMatToFileWithFullName(double** mat, char* fullFileName);
bool SaveMatToFileWithFullNameIntFormat(double** mat, char* fullFileName);

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

#endif // __MAT__H_
