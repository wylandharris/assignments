setwd("/home/wharris/assignments/BigData")
aFile = readLines("Harris_4_Trump.txt")
 
library(tm)
myCorpus = Corpus(VectorSource(aFile))
 
myCorpus = tm_map(myCorpus, tolower)
myCorpus = tm_map(myCorpus, removePunctuation)
myCorpus = tm_map(myCorpus, removeNumbers)
myCorpus = tm_map(myCorpus, removeWords, stopwords("english"))

myCorpus <- tm_map(myCorpus, PlainTextDocument)

myDTM = TermDocumentMatrix(myCorpus, control = list(minWordLength = 50))
 
m = as.matrix(myDTM)
 
v = sort(rowSums(m), decreasing = TRUE)

png(file = "/home/wharris/assignments/BigData/Harris_Trump.png", bg = "black")

library(wordcloud)
set.seed(4363)
wordcloud(names(v), v, min.freq = 2,
          random.order=FALSE, rot.per=0.35, use.r.layout=FALSE,
          colors=brewer.pal(5, "Set1"))

dev.off()
library(wordcloud)
set.seed(4363)
wordcloud(names(v), v, min.freq = 2,
          random.order=FALSE, rot.per=0.35, use.r.layout=FALSE,
          colors=brewer.pal(5, "Set1"))

dev.off()
