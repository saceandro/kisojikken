(define (plus1 a b)
  (if (<= a 0)
      b
      (+ (plus1 (- a 1) b) 1)))
(define (plus2 a b)
  (if (<= a 0)
      b
      (plus2 (- a 1) (+ b 1))))
