global apmshutdown
global apmreboot

apmshutdown:
        ;check if APM is ok
        mov ax, 5300h 
        xor bx, bx 
        int 15h

        ;connect to APM API
        mov     ax, 5301h
        xor     bx, bx
        int     15h

        ;try to set APM version (to 1.2)
        mov     ax, 530Eh
        mov     cx, 0102h
        xor     bx, bx
        int     15h

        ;turn off the system
        mov     ax, 5307h
        mov     bx, 0001h
        mov     cx, 0003h
        int     15h
        hlt

apmreboot:
    int 19h