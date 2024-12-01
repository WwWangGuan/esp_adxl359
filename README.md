# SPI配置
* CPOL/CPHA = 0/0，每次8bit传输（单字节）
* 时钟最大10Mhz
* 根据时序图，写寄存器时高七位是地址，最低位控制读写（R/W=0/1）,so easy
![](https://raw.githubusercontent.com/WwWangGuan/pics/main/20241202023347.png)
