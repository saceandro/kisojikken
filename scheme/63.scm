(define (my-append a b)
  (if (null? a)
      b
      (cons (car a) (my-append (cdr a) b))))

(define (my-reverse-iter a b)
  (if (null? a)
      b
      (my-reverse-iter (cdr a) (cons (car a) b))))
(define (my-reverse a)
  (my-reverse-iter a '()))

;; 計算量が2倍になる代わりに、末尾再帰で書いたもの。
(define (my-append2 a b)
  (my-reverse-iter (my-reverse a) b))