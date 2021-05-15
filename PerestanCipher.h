# pragma once
# include  < строка >
# include  < вектор >
# включить  < iostream >
используя  пространство имен  std ;
class  PerestanCipher
{
частный:
    int k;
    wstring getValidOpenText ( const std :: wstring & s);
    wstring getValidCipherText ( const std :: wstring & s);
    int  getValidKey ( const  int k, const std :: wstring & s);
общественность:
    PerestanCipher () = удалить ;
    ПерестанШифр ( int w);
    wstring CoderPerestanCipher (PerestanCipher w, wstring & s);
    wstring DecoderPerestanCipher (PerestanCipher w, wstring & s);
};
класс  cipher_error : общедоступный  std :: invalid_argument
{
общественность:
    явный  cipher_error ( const std :: string & what_arg):
        std :: invalid_argument (какой_арг) {}
    явный  cipher_error ( const  char * what_arg):
        std :: invalid_argument (какой_арг) {}
};
