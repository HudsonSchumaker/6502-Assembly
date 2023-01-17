;
; macro 6502
;

.macro LDAXY a,x,y
  .ifnblank a
    lda #a
  .endif
  
  .ifnblank x
    ldx #x
  .endif
  
  .ifnblank y
    ldy #y
  .endif

.endmacro
