;
; macro 6502
;

.macro LDAXY a,x,y
  .ifnblank a
    lda #a
  .endif


.endmacro
