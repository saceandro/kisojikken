(define (my-fold op acc l)
  (if (null? l)
      acc
      (my-fold op (op (car l) acc) (cdr l))))

(define (my-length2 alist)
  (let ((add (lambda (x acc) (+ acc 1))))
    (my-fold add 0 alist)))

(define (rev alist blist)
  (cons alist blist))

(define (my-reverse2 alist)
  (my-fold rev '() alist))