EXCLUDES = [
  "Rakefile.org",
  "links.org",
  "log.org"
]

ORGS = [
  "index-expanded.org", 
  "index.org", 
  "lects.org", 
  "memos.org", 
  "org-docs.org", 
  "supplement.org"
]

SUBDIRS = [
  "info", 
  "lects", 
  "memos", 
  "org-docs", 
  "supplement"
]

HTMLS = ORGS.map do |f|
  File.basename(f,'.org')+".html"
end

