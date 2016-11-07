EXCLUDES = [
  "Rakefile.org",
  "links.org",
  "log.org"
]

ORGS = [
  "card-display.org",
  "cis-programming-lects.org",
  "cutter.org",
  "poker.org",
  "simple.org",
  "software-test.org",
  "tdd-card-display-simple.org",
  "what-is-tdd.org",
]

SUBDIRS = [
]

HTMLS = ORGS.map do |f|
  File.basename(f,'.org')+".html"
end

