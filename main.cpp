# включить  < iostream >
# включить  < cctype >
# включить  " modAlphaCipher.h "
используя  пространство имен  std ;
 проверка void ( const wstring & Text, const wstring & key, const  bool destructCipherText = false )
{
    попробуйте {
        wstring cipherText;
        wstring decryptedText;
        modAlphaCipher cipher (ключ);
        cipherText = шифр. зашифровать (текст); // зашифровывание
        if (destructCipherText) // надо "портить"?
        cipherText. front () = tolower (cipherText. front ()); // "портим"
        decryptedText = шифр. расшифровать (cipherText);
        wcout << " key = " << key << endl;
        wcout << Текст << endl;
        wcout << cipherText << endl;
        wcout << decryptedText << endl;
    } catch ( const cipher_error & e) {
        cerr << " Ошибка: " << e. what () << endl;
    }
}
int  main ( int argc, char ** argv)
{
    std :: locale loc ( " ru_RU.UTF-8 " );
    std :: locale :: global (loc);
// установка глобальной локали
    проверьте ( L " THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG " , L " Простой " );
    проверьте ( L " THE QUICKBROWNFOXJUMPSOVERTHELAZYDOG " , L " " );
    проверьте ( L " THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG " , L " ABCD123 " );
    проверьте ( L « Быстрая коричневая лисица перепрыгивает через ленивую собаку » , L « СУПЕР » );
    check ( L " THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG " , L " TOPSECRET " , true );
    чек ( L " 123 " , L " ABCD " );
    возврат  0 ;
}
