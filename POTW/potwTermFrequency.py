## Term frequency-inverse document frequency (TF-IDF)
## is a common technique used among search engines for
## determining which documents are most relevant to a
## given query. This technique mitigates common word's
## contribution to relevance scores by weighting each 
## term's frequency by a factor called the inverse 
## document frequency. 

D = ["3", "this sentence is about ducks", "this sentence is about dogs", "dogs dogs dogs", "dogs"]
T = "dog"
D.count("%i", T)