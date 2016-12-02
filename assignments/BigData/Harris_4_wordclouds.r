aFile = readLines("/home/wharris/assignments/BigData/Harris_4_Bama.txt")
 
library(tm)
myCorpus = Corpus(VectorSource(aFile))
 
myCorpus = tm_map(myCorpus, tolower)
myCorpus = tm_map(myCorpus, removePunctuation)
myCorpus = tm_map(myCorpus, removeNumbers)
myCorpus = tm_map(myCorpus, removeWords, stopwords("english"))

myCorpus <- tm_map(myCorpus, plainTextDocument)

myDTM = TermDocumentMatrix(myCorpus, control = list(minWordLength = 1))
 
m = as.matrix(myDTM)
 
v = sort(rowSums(m), decreasing = TRUE)
