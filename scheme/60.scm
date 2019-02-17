;; 評価すると異なる結果になるのはl4。
;; l1 と l7は同一の式。l2, l5, l6は同一の式。l3,l4は他のどれとも違う式。
;;schemeの式として同一かどうかは、式全体をquoteしたものを処理系に与え、できるだけドットを使わない形で式を表示させることによって判定できる。

''(1 2 3 4 5)
'(list '1 2 3 4 5)
'(cons '1 (list 2 3 4 5))
''('1 2 3 4 5)
'(list . ((quote 1 . ()) 2 3 4 5))
'(list '1 . (2 3 4 . (5)))
'(quote . ((1 2 3 4 5)))

(newline)

(define l1 '(1 2 3 4 5))
(define l2 (list '1 2 3 4 5))
(define l3 (cons '1 (list 2 3 4 5)))
(define l4 '('1 2 3 4 5)) ; l4だけ他と異なる。内側の'もデータの一部として扱われる。。
(define l5 (list . ((quote 1 . ()) 2 3 4 5)))
(define l6 (list '1 . (2 3 4 . (5))))
(define l7 (quote . ((1 2 3 4 5))))

(define l2-2 (cons '1 (cons 2 (cons 3 (cons 4 (cons 5 '()))))))
(define l3-2 (cons '1 (cons 2 (cons 3 (cons 4 (cons 5 '()))))))

(equal? l1 l2)
(equal? l1 l3)
(equal? l1 l4)
(equal? l1 l5)
(equal? l1 l6)
(equal? l1 l7)
(newline)
(equal? l2 l3)
(equal? l2 l4)
(equal? l2 l5)
(equal? l2 l6)
(equal? l2 l7)
(newline)
(equal? l3 l4)
(equal? l3 l5)
(equal? l3 l6)
(equal? l3 l7)
(newline)
(equal? l4 l5)
(equal? l4 l6)
(equal? l4 l7)
(newline)
(equal? l5 l6)
(equal? l6 l7)
(newline)
(equal? l6 l7)

(eq? l1 l2)
(eq? l1 l3)
(eq? l1 l4)
(eq? l1 l5)
(eq? l1 l6)
(eq? l1 l7)
(newline)
(eq? l2 l3)
(eq? l2 l4)
(eq? l2 l5)
(eq? l2 l6)
(eq? l2 l7)
(newline)
(eq? l3 l4)
(eq? l3 l5)
(eq? l3 l6)
(eq? l3 l7)
(newline)
(eq? l4 l5)
(eq? l4 l6)
(eq? l4 l7)
(newline)
(eq? l5 l6)
(eq? l6 l7)
(newline)
(eq? l6 l7)