# включить  " modAlphaCipher.h "

modAlphaCipher :: modAlphaCipher ( Const станд :: wstring & SKEY)
{
    for ( unsigned i = 0 ; i <numAlpha. size (); i ++) {
        alphaNum [numAlpha [i]] = i;
    }
    ключ = преобразовать ( getValidKey ( skey ));
}

std :: wstring modAlphaCipher :: encrypt ( const std :: wstring & open_text)
{
    std :: vector < int > work = convert ( getValidOpenText (open_text));
    for ( unsigned i = 0 ; i <work. size (); i ++) {
        work [i] = (work [i] + key [i% key. size ()])% alphaNum. размер ();
    }
    return  convert (работа);
}

std :: wstring modAlphaCipher :: decrypt ( const std :: wstring & cipher_text)
{
    std :: vector < int > work = convert ( getValidCipherText (cipher_text));
    for ( unsigned i = 0 ; i <work. size (); i ++) {
        work [i] = (work [i] + alphaNum. size () - key [i% key. size ()])% alphaNum. размер ();
    }
    return  convert (работа);
}

встроенный std :: vector < int > modAlphaCipher :: convert ( const std :: wstring & s)
{
    std :: vector < int > result;
    for ( auto c: s) {
        результат. push_back (alphaNum [c]);
    }
    вернуть результат;
}
встроенный std :: wstring modAlphaCipher :: convert ( const std :: vector < int > & v)
{
    std :: wstring result;
    for ( auto i: v) {
        результат. push_back (numAlpha [i]);
    }
    вернуть результат;
}
встроенный std :: wstring modAlphaCipher :: getValidKey ( const std :: wstring & s)
{
    если (s. empty ())
        throw  cipher_error ( « Пустой ключ » );
    std :: wstring tmp (s);
    for ( auto & c: tmp) {
        если (! isalpha (c))
            throw  cipher_error ( std :: string ( " Неверный ключ " ));
        if ( islower (c)) c = toupper (c);
    }
    return tmp;
}
встроенный std :: wstring modAlphaCipher :: getValidOpenText ( const std :: wstring & s)
{
    std :: wstring tmp;
    for ( auto c: s) {
        if ( isalpha (c)) {

            если ( ниже (с))
                tmp. push_back ( toupper (c));
            еще
                tmp. push_back (c);
        }
    }
    если (tmp. empty ())
        throw  cipher_error ( « Пустой открытый текст » );
    return tmp;
}
встроенный std :: wstring modAlphaCipher :: getValidCipherText ( const std :: wstring & s)
{
    если (s. empty ())
        throw  cipher_error ( " Пустой зашифрованный текст " );
    for ( auto c: s) {
        если (! isupper (c))
            throw  cipher_error ( std :: string ( " Неверный зашифрованный текст " ));
    }
    return s;
}
