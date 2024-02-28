// ReportGeneratorFactory.h
#ifndef REPORT_GENERATOR_FACTORY_H
#define REPORT_GENERATOR_FACTORY_H

#include "ReportGenerator.h"
#include "PdfReportGenerator.h"
#include "ExcelReportGenerator.h"
#include "HtmlReportGenerator.h"

enum class ReportFormat {
    PDF,
    EXCEL,
    HTML
};

class ReportGeneratorFactory {
public:
    static ReportGenerator* createReportGenerator(ReportFormat format) {
        switch (format) {
            case ReportFormat::PDF:
                return new PdfReportGenerator();
            case ReportFormat::EXCEL:
                return new ExcelReportGenerator();
            case ReportFormat::HTML:
                return new HtmlReportGenerator();
            default:
                return nullptr;
        }
    }
};

#endif // REPORT_GENERATOR_FACTORY_H
