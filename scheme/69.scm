(define (fix2 f)
  (lambda (x)
    ((f f) x)))