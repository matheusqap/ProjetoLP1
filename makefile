# Compilador e flags de compilação
CC = g++
CFLAGS = -std=c++11 -Wall
LDFLAGS = -Iinclude

# Diretórios de origem, objeto e binário
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# Localiza todos os arquivos de código-fonte na pasta src
SRCS = $(wildcard $(SRCDIR)/*.cpp)
# Cria uma lista de arquivos objeto correspondente aos arquivos de código-fonte
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))
# Caminho e nome do arquivo binário final
TARGET = $(BINDIR)/kanban

.PHONY: all clean

# Regra padrão para compilar todos os alvos
all: $(TARGET)

# Regra para criar o arquivo binário final
$(TARGET): $(OBJS)
	@mkdir -p $(BINDIR)
	$(CC) $(LDFLAGS) $^ -o $@

# Regra para criar os arquivos objeto
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos objeto e binário
clean:
	@rm -rf $(OBJDIR) $(BINDIR)
