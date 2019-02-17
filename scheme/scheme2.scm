(define (fact n)
  (if (< n 1)
      1
      (* n (fact (- n 1)))))

(define (fact-iter n acc)
  (if (< n 1)
      acc
      (fact-iter (- n 1) (* n acc))))
(define (fact2 n) (fact-iter n 1))
