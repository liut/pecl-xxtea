<?php

echo "empty:1\t", xxtea_decrypt(xxtea_encrypt("", "1"), "1"), "\n";
echo "1:1\t", xxtea_decrypt(xxtea_encrypt("1", "1"), "1"), "\n";
echo "str:key\t", xxtea_decrypt(xxtea_encrypt("12222222222222", "2222222222222222"), "2222222222222222"), "\n";
echo "str:key\t", xxtea_decrypt(xxtea_encrypt("12222222222222", "22222222222"), "22222222222"), "\n";
echo "\n";
print_r(xxtea_info());

echo 'A:A', "\t"; // string(12) "bKIlXWXSJvE="
var_dump(base64_encode(xxtea_encrypt('A','A')));
echo 'A:AAAAAAAAAAAAAAAA', "\t"; // string(12) "Q714fFUVK6k="
var_dump(base64_encode(xxtea_encrypt('A','AAAAAAAAAAAAAAAA')));
echo PHP_EOL;

