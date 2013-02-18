<?php
echo "empty:empty\t", xxtea_decrypt(xxtea_encrypt("", ""), ""), "\n";
echo "1:empty\t", xxtea_decrypt(xxtea_encrypt("1", ""), ""), "\n";
echo "1:1\t", xxtea_decrypt(xxtea_encrypt("1", "1"), "1"), "\n";
echo "str:key\t", xxtea_decrypt(xxtea_encrypt("12222222222222", "2222222222222222"), "2222222222222222"), "\n";
echo "str:key\t", xxtea_decrypt(xxtea_encrypt("12222222222222", "22222222222"), "22222222222"), "\n";
echo "\n";
print_r(xxtea_info());
?>